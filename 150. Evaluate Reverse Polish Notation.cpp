string sum(string opertr, int a, int b)
{
    if (opertr[0] == '+')
        return to_string(a + b);
    else if (opertr[0] == '-')
        return to_string(a - b);
    else if (opertr[0] == '*')
        return to_string(a * b);
    else
        return to_string(a / b);
}

int evalRPN(vector<string> &tokens)
{
    deque<string> deq;
    int ans = 0;
    for (int i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
        {
            int b = stoi(deq.back());
            deq.pop_back();
            int a = stoi(deq.back());
            deq.pop_back();
            deq.push_back(sum(tokens[i], a, b));
        }
        else
            deq.push_back(tokens[i]);
    }

    return stoi(deq.back());
}