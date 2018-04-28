# https://leetcode.com/problems/valid-number/description/

import re
class Solution(object):
    def isNumber(self, s):
        return re.match(r'^\s*(-|\+)?([0-9]+|[0-9]+\.[0-9]*|[0-9]*\.[0-9]+)(e(-|\+)?[0-9]+)?\s*$', s) is not None
