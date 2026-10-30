param([string]$Username = 'alice', [string]$Out = '')
# Run only in the existing controlled Windows research laboratory.
$repoPath = Split-Path -Parent $PSScriptRoot
Push-Location -LiteralPath $repoPath
try {
    if (-not $Out) { $Out = Join-Path 'jack_xxx_evidence/build' ([Guid]::NewGuid().ToString('N')) }
    $captureArgs = @('scripts/pafet_native_step_capture.py', '--profile', 'native-x64-v1')
    foreach ($site in @('0x22bc85','0x22fcce','0x2304ba','0x231c07')) {
        $captureArgs += @('--entry-any', $site)
    }
    foreach ($boundary in @('0x1fd5c6','0x202ed6','0x210143','0x21e94d',
                            '0x1fdbff','0x20350f','0x21077c','0x21ef86',
                            '0x1f8f1c','0x209f9d','0x20ed6a','0x21e244')) {
        $captureArgs += @('--stop-any', $boundary)
    }
    $captureArgs += @('--select-counter','0x11e0:1','--frames','1','--user',$Username,'--region','rcx:0x11f0')
    foreach ($root in @('rcx:0x1d0:2678','rcx:0x48:2678','rcx:0xb10:104','rcx:0xb50:104',
                        'rcx:0x180:4096','rcx:0x188:8192','rcx:0x1190:0x1f20')) {
        $captureArgs += @('--pointer-region', $root)
    }
    $captureArgs += @('--out', $Out)
    & python @captureArgs
    if ($LASTEXITCODE -ne 0) { throw 'Capture incomplete; retain its diagnostics.' }
    & python scripts/pafet_state_compare.py --captures $Out
    if ($LASTEXITCODE -ne 0) { throw 'Level A replay mismatch; inspect comparison.json.' }
    Write-Output "Capture and Level A comparison: $Out"
    Write-Output 'Review the semantic path and pin hashes before adding it to the permanent corpus.'
} finally { Pop-Location }
