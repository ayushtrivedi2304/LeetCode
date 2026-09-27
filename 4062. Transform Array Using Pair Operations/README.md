## Source to Target Transformation

You are given two integer arrays `source` and `target` of the same length.

In one **operation**, you may choose two **distinct indices** `i` and `j` in `source`, along with any integer `delta`, and perform the following update:

```text
source[i] = source[i] + source[j] - delta
source[j] = delta
```

You may perform this operation **any number of times**, including zero times.

Determine whether it is possible to transform `source` into `target`.

Return `true` if `source` can be made exactly equal to `target`; otherwise, return `false`.

### Example 1

**Input:**

```text
source = [1, 2, 3]
target = [0, 2, 4]
```

**Output:**

```text
true
```

**Explanation:**

Choose `i = 0`, `j = 2`, and `delta = 4`.

Before the operation:

```text
source[0] = 1
source[2] = 3
```

After the operation:

```text
source[0] = 1 + 3 - 4 = 0
source[2] = 4
```

So the array becomes:

```text
[0, 2, 4]
```

which is equal to `target`.

Therefore, the answer is `true`.

---

### Example 2

**Input:**

```text
source = [-5, -5]
target = [-15, 5]
```

**Output:**

```text
true
```

**Explanation:**

Choose `i = 1`, `j = 0`, and `delta = -15`.

After the operation:

```text
source[1] = -5 + (-5) - (-15) = 5
source[0] = -15
```

So the array becomes:

```text
[-15, 5]
```

which is equal to `target`.

Therefore, the answer is `true`.

---

### Example 3

**Input:**

```text
source = [1, 2, 1]
target = [0, 2, 5]
```

**Output:**

```text
false
```

**Explanation:**

It is not possible to transform `source` into `target` using the given operation.

Therefore, the answer is `false`.

---

### Constraints

* `2 <= source.length == target.length <= 10^5`
* `-10^9 <= source[i], target[i] <= 10^9`
