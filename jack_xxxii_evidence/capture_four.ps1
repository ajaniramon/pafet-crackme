param([string]$Username = 'alice', [Parameter(Mandatory=$true)][string]$Out)
# Existing controlled research lab; unchanged pinned pass8 gate variant.
$repoPath = Split-Path -Parent $PSScriptRoot
Push-Location -LiteralPath $repoPath
try {
    $captureArgs = @('scripts/pafet_native_step_capture.py','--profile','native-x64-v1','--stop-counter-min','0x11e0:4','--step-limit','500000')
    foreach ($site in @('0x22bc85','0x22fcce','0x2304ba','0x231c07')) {
        $captureArgs += @('--entry-any', $site)
    }
    foreach ($boundary in @('0x1f88b4','0x209934','0x20e701','0x21dbdb','0x22fcd0','0x231c09','0x22bc87','0x2304bc')) { $captureArgs += @('--stop-any',$boundary) }
    $captureArgs += @('--select-counter','0x11e0:1','--frames','1','--user',$Username,'--region','rcx:0x11f0')
    foreach ($root in @('rcx:0x1d0:2678','rcx:0x48:2678','rcx:0xb10:104','rcx:0xb50:104',
                        'rcx:0x180:4096','rcx:0x188:8192','rcx:0x1190:0x1f20')) {
        $captureArgs += @('--pointer-region', $root)
    }
    $captureArgs += @('--out', $Out)
    & python @captureArgs
    if ($LASTEXITCODE -ne 0) { throw 'Capture incomplete; preserve diagnostics.' }
} finally { Pop-Location }
