states_input = input()
removing_states = states_input[len("states: "):]
actual_states = removing_states.split(" ")
# print(actual_states)

symbols_input = input()
removing_symbols = symbols_input[len("symbols: "):]
actual_symbols = removing_symbols.split(" ")

input()
dfa = [[None for x in range(len(actual_symbols))] for y in range(len(actual_states))]

while True:
    path_inputs = input()
    if path_inputs == "end_rules":
        break
    remove_arrow = path_inputs.replace('->', '')
    remove_on = remove_arrow.replace('on', '')
    get_path = remove_on.split("  ")
    dfa[actual_states.index(get_path[0])][actual_symbols.index(get_path[2])] = get_path[1]

start = input()
actual_start = start[len("start: "):]
final = input()
remove_final = final[len("final: "):]
actual_final = remove_final.split(" ")

while True:
    try:
        trace = input()
    except EOFError:
        break
    actual_trace = list(trace)

    for r in range(len(actual_trace)):
        if dfa[actual_states.index(actual_start)][actual_symbols.index(actual_trace[r])] is None:
            print("rejected")
            break
        elif r == len(actual_trace) - 1 and dfa[actual_states.index(actual_start)][
            actual_symbols.index(actual_trace[r])] \
                is not None:
            if dfa[actual_states.index(actual_start)][actual_symbols.index(actual_trace[r])] in actual_final:
                print("accepted")
                break
            else:
                print("rejected")
                break
        else:
            actual_start = dfa[actual_states.index(actual_start)][actual_symbols.index(actual_trace[r])]
