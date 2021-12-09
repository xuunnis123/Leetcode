# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        
        res = {}
        def lastLevel(root, res, count):
            if not root:
                return
            if count not in res:
                res[count] = []
            res[count].append(root.val)
            if root.left:
                lastLevel(root.left, res, count + 1)
            if root.right:
                lastLevel(root.right, res, count + 1)
        lastLevel(root, res, 0)
        return sum(res[max(res.keys())])