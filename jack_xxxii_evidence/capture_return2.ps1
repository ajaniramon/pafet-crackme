param([string]$Username = 'alice', [Parameter(Mandatory=$true)][string]$Out)
# Existing controlled research lab; unchanged pinned pass8 gate variant.
$repoPath = Split-Path -Parent $PSScriptRoot
Push-Location -LiteralPath $repoPath
try {
    $captureArgs = @('scripts/pafet_native_step_capture.py','--profile','native-x64-v1','--stop-rva','0x229c70')
    $captureArgs += @('--entry','0x22bc85','--step-limit','500000')
    $captureArgs += @('--select-counter','0x11e0:1','--frames','1','--user',$Username,'--region','rcx:0x11f0')
    foreach ($root in @('rcx:0x1d0:2678','rcx:0x48:2678','rcx:0xb10:104','rcx:0xb50:104',
                        'rcx:0x180:4096','rcx:0x188:8192','rcx:0x1190:0x1f20')) {
        $captureArgs += @('--pointer-region', $root)
    }
    $captureArgs += @('--out', $Out)
    & python @captureArgs
    if ($LASTEXITCODE -ne 0) { throw 'Capture incomplete; preserve diagnostics.' }
} finally { Pop-Location }
