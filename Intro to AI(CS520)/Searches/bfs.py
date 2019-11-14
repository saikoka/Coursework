def map_bfs(map=None):
    # Takes in dim X dim map of 0's and 1's. Uses Breadth First Search to find
    # path from start to goal. Returns that path. Returns that path as a list of nodes from start
    # node to goal node.

    dim = len(map)
    goal = (dim-1,dim-1)
    start = (0,0)
    st_prev = start
    visited = []
    parent_list = []
    path = []
    fg = [start]
    rs = [] # restricted states
    fringed = []
    fg_parents=[]
    fringed[0] = start# list of states in order they were added to the fringe
    fg_parents[0] = start# list of parents of each state in fringed list


    while len(fg) != 0:
        st = fg[0]    # state. 2-d vec from fg. newest in fg.
        fg.remove()
        if st == goal:
            visited.append(st)
            parent_list.append(st_prev)
            path[0] = st
            while sum(path[len(path)]) != sum(start):
                for (a,b) in fringed:                # find position of state in visited list
                    if fringed[(a,b)] == st:
                        st_pos = i
                        break
                        st_parent = fg_parents[st_pos]
                        path[len(path) + 1] = st_parent
                        st_prev = st
                        st = st_parent
                        path2 = path
                        for i in path:                        # this loop reverses order of path list
                            path[i] = path2[len(path) - i + 1]
                            output = path
                            print('Success')
                            return