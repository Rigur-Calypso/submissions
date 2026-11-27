<h2><a href="https://codeforces.com/contest/2292/problem/G" target="_blank" rel="noopener noreferrer">2292G — Soft Memories</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2292G](https://codeforces.com/contest/2292/problem/G) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">G. Soft Memories</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Returning home and wrapping themselves in a warm blanket, Sunny and Aubrey pulled out a box of old photos. In total, they have $$$m$$$ photos. The $$$i$$$-th photo has an emotional tone $$$a_i$$$: some pictures are very quiet and peaceful, while others are bright, noisy, and joyful.</p><p>The friends want to arrange an evening of memories and view the photos according to a special system. To do this, they choose a number of photos $$$n$$$ ($$$1 \le n \le m$$$) that is a power of two, select any $$$n$$$ photos from the box, and arrange them in a row: $$$p_1, p_2, \dots, p_n$$$.</p><p>Then, a tournament of memories is held, consisting of $$$\log_2 n$$$ rounds: </p><ol> <li> In the current round, the photos are divided into adjacent pairs. </li><li> For each pair with photo tones $$$x$$$ and $$$y$$$, the friends gain $$$|x - y| - k$$$ resonance points, where $$$k$$$ is a fixed emotional cost per comparison. </li><li> The photo with the larger tone $$$\max(x, y)$$$ advances to the next round (if $$$x = y$$$, either photo advances). The winners form a new row, preserving their relative order, after which the next round begins. </li></ol><p>The process ends when a single photo remains. Help Sunny and Aubrey choose the number $$$n$$$, the photos themselves, and their initial order $$$p_1, p_2, \dots, p_n$$$ to maximize the total resonance over all rounds.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$m$$$ and $$$k$$$ ($$$1 \le m \le 2 \cdot 10^5$$$, $$$0 \le k \le 10^9$$$) — the total number of photos and the cost per comparison.</p><p>The second line contains $$$m$$$ integers $$$a_1, a_2, \dots, a_m$$$ ($$$-10^9 \le a_i \le 10^9$$$) — the emotional tones of the photos.</p><p>The sum of $$$m$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer — the maximum possible total resonance over the entire comparison process.</p><p>The answer may not fit into a 32-bit signed integer.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004342691017817317" id="id006728575278254109" class="input-output-copier">Copy</div></div><pre data-content="5
4 3
10 20 5 15
3 0
-5 0 5
1 4
-2
8 0
0 0 0 0 1 1 1 1
2 0
-1 -1
" id="id004342691017817317"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">4 3</div><div class="test-example-line test-example-line-odd test-example-line-1">10 20 5 15</div><div class="test-example-line test-example-line-even test-example-line-2">3 0</div><div class="test-example-line test-example-line-even test-example-line-2">-5 0 5</div><div class="test-example-line test-example-line-odd test-example-line-3">1 4</div><div class="test-example-line test-example-line-odd test-example-line-3">-2</div><div class="test-example-line test-example-line-even test-example-line-4">8 0</div><div class="test-example-line test-example-line-even test-example-line-4">0 0 0 0 1 1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-5">2 0</div><div class="test-example-line test-example-line-odd test-example-line-5">-1 -1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005084856875101097" id="id007826525401085435" class="input-output-copier">Copy</div></div><pre data-content="16
10
0
4
0
" id="id005084856875101097"><div class="test-example-line test-example-line-odd test-example-line-1">16</div><div class="test-example-line test-example-line-even test-example-line-2">10</div><div class="test-example-line test-example-line-odd test-example-line-3">0</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-odd test-example-line-5">0</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case use the order $$$20,5,15,10$$$. The first two pairs score $$$15-3=12$$$ and $$$5-3=2$$$. The final compares $$$20$$$ and $$$15$$$ for another $$$2$$$ points, giving $$$16$$$ in total.</p><p>In the second test case choose the photos with tones $$$-5$$$ and $$$5$$$. Their one comparison scores $$$10$$$.</p><p>In the third test case there is just one photo and no comparison, so the score is $$$0$$$.</p><p>In the fourth test case, pair each zero with a one in the first round. These four pairs score one point each. Only ones remain, so all later comparisons score zero. Each point requires a zero to lose, and there are only four zeros.</p></div>