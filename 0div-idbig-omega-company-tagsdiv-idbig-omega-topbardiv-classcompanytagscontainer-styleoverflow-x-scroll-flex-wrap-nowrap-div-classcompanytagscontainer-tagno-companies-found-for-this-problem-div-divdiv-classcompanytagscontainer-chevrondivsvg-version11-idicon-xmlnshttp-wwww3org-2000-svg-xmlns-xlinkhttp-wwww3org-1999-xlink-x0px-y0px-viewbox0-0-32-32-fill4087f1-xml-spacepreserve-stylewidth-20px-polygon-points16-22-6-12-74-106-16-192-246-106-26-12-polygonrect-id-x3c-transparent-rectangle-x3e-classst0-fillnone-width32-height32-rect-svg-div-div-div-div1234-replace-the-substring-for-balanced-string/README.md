<h2><a href="https://leetcode.com/problems/replace-the-substring-for-balanced-string/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag">No companies found for this problem</div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>1234. Replace the Substring for Balanced String</a></h2><h3>Medium</h3><hr><div><p>You are given a string s of length <code>n</code> containing only four kinds of characters: <code>'Q'</code>, <code>'W'</code>, <code>'E'</code>, and <code>'R'</code>.</p>

<p>A string is said to be <strong>balanced</strong><em> </em>if each of its characters appears <code>n / 4</code> times where <code>n</code> is the length of the string.</p>

<p>Return <em>the minimum length of the substring that can be replaced with <strong>any</strong> other string of the same length to make </em><code>s</code><em> <strong>balanced</strong></em>. If s is already <strong>balanced</strong>, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> s = "QWER"
<strong>Output:</strong> 0
<strong>Explanation:</strong> s is already balanced.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> s = "QQWE"
<strong>Output:</strong> 1
<strong>Explanation:</strong> We need to replace a 'Q' to 'R', so that "RQWE" (or "QRWE") is balanced.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> s = "QQQW"
<strong>Output:</strong> 2
<strong>Explanation:</strong> We can replace the first "QQ" to "ER". 
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == s.length</code></li>
	<li><code>4 &lt;= n &lt;= 10<sup>5</sup></code></li>
	<li><code>n</code> is a multiple of <code>4</code>.</li>
	<li><code>s</code> contains only <code>'Q'</code>, <code>'W'</code>, <code>'E'</code>, and <code>'R'</code>.</li>
</ul>
</div>