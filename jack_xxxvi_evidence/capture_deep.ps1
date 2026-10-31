param([string]$Username = 'alice', [Parameter(Mandatory=$true)][string]$Out, [ValidateRange(18,45)][int]$Depth = 45)
# JACK XXXVI: prospective Windows capture through instruction $Depth (not run in
# this session: no Windows laboratory was reachable). Stops at the first
# recovered handler entry whose decode counter reaches $Depth+1. The existing
# trap-flag collector is limited to 1,000,000 native steps (~45 virtual steps).
$repoPath = Split-Path -Parent $PSScriptRoot
Push-Location -LiteralPath $repoPath
try {
    $captureArgs = @('scripts/pafet_native_step_capture.py','--profile','native-x64-v1','--stop-counter-min',('0x11e0:' + ($Depth + 1)),'--step-limit','1000000')
    foreach ($site in @('0x22bc85','0x22fcce','0x2304ba','0x231c07')) { $captureArgs += @('--entry-any', $site) }
    foreach ($site in @('0x1f2660','0x1f35e0','0x1f4260','0x1f4f20','0x1f5bf0','0x1f68d0','0x1f7590','0x1f8210','0x1f8f40','0x1f9c10','0x1fa890','0x1fb5c0','0x1fc230','0x1fcef0','0x1fdc20','0x1fe8a0','0x1ff550','0x2001c0','0x200e30','0x201b80','0x202800','0x203530','0x204670','0x2052f0','0x205fa0','0x206c70','0x2078e0','0x208610','0x209290','0x209fc0','0x20ad10','0x20b9d0','0x20c650','0x20d330','0x20e060','0x20ed90','0x20fa70','0x2107a0','0x211420','0x2120e0','0x212d60','0x213a20','0x214950','0x215620','0x2162d0','0x216f40','0x217c70','0x218940','0x2195c0','0x21a230','0x21aeb0','0x21bb70','0x21c7f0','0x21d530','0x21e270','0x21efb0','0x21fc40','0x220b70','0x2217f0','0x222470','0x223100','0x223dd0','0x224aa0','0x225710','0x226400','0x227080','0x227d40','0x228a10')) { $captureArgs += @('--stop-any',$site) }
    $captureArgs += @('--select-counter','0x11e0:1','--frames','1','--user',$Username,'--region','rcx:0x11f0')
    foreach ($root in @('rcx:0x1d0:2678','rcx:0x48:2678','rcx:0xb10:104','rcx:0xb50:104',
                        'rcx:0x180:4096','rcx:0x188:8192','rcx:0x1190:0x1f20')) {
        $captureArgs += @('--pointer-region', $root)
    }
    $captureArgs += @('--out', $Out)
    & python @captureArgs
    if ($LASTEXITCODE -ne 0) { throw 'Capture incomplete; preserve diagnostics.' }
} finally { Pop-Location }
