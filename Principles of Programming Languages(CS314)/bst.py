class Node:
    def __init__(self, data=None):
        self.data = data
        self.left = None
        self.right = None


class BST:
    def __init__(self):
        self.root = None
        #self.message = "found:"

    def insert(self, data):
        if self.root is None:
            self.root = Node(data)
        else:
            self._insert(data, self.root)

    def _insert(self, data, presentNode):
        if data < presentNode.data:
            if presentNode.left is None:
                presentNode.left = Node(data)
            else:
                self._insert(data, presentNode.left)
        else:
            if data > presentNode.data:
                if presentNode.right is None:
                    presentNode.right = Node(data)
                else:
                    self._insert(data, presentNode.right)

    def search(self, data):  # not sure if this works, might have to change data name?
        message = "found:"
        if self.root is None:
            return "not found"
        elif data == self.root.data:
            return "found: root"
        else:
            return self._search(data, self.root, message)

    def _search(self, data, presentNode, message):

        if data == presentNode.data:
            return message
        elif data < presentNode.data and presentNode.left is not None:
            message = message + " l"
            return self._search(data, presentNode.left, message)
        elif data > presentNode.data and presentNode.right is not None:
            message = message + " r"
            return self._search(data, presentNode.right, message)
        return "not found"


tree = BST()
while True:
    try:
        x = input()
    except EOFError:
        break

    if (x[0] == 'i' or x[0] == 'q') and isinstance(int(x[2]), int) and x[1] == ' ':
        if x[0] == 'i':
            tree.insert(int(x[len("i "):]))
        else:
            print(tree.search(int(x[len("q "):])))


