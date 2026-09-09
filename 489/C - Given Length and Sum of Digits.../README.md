<h2><a href="https://codeforces.com/contest/489/problem/C" target="_blank" rel="noopener noreferrer">489C — Given Length and Sum of Digits...</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 489C](https://codeforces.com/contest/489/problem/C) |

## Topics
`dp` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Given Length and Sum of Digits...</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>You have a positive integer <span class="tex-span"><i>m</i></span> and a non-negative integer <span class="tex-span"><i>s</i></span>. Your task is to find the smallest and the largest of the numbers that have length <span class="tex-span"><i>m</i></span> and sum of digits <span class="tex-span"><i>s</i></span>. The required numbers should be non-negative integers written in the decimal base without leading zeroes.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The single line of the input contains a pair of integers <span class="tex-span"><i>m</i></span>, <span class="tex-span"><i>s</i></span> (<span class="tex-span">1 ≤ <i>m</i> ≤ 100, 0 ≤ <i>s</i> ≤ 900</span>) — the length and the sum of the digits of the required numbers.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the output print the pair of the required non-negative integer numbers — first the minimum possible number, then — the maximum possible number. If no numbers satisfying conditions required exist, print the pair of numbers "<span class="tex-font-style-tt">-1 -1</span>" (without the quotes).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00390470036717127" id="id005426965530643775" class="input-output-copier">Copy</div></div><pre id="id00390470036717127">2 15<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009607194784410689" id="id007865579116153367" class="input-output-copier">Copy</div></div><pre id="id009607194784410689">69 96<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009010849801990296" id="id0010632448482228452" class="input-output-copier">Copy</div></div><pre id="id009010849801990296">3 0<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007577409233207141" id="id006962245117995748" class="input-output-copier">Copy</div></div><pre id="id007577409233207141">-1 -1<br></pre></div></div></div>