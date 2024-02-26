int main()
{
    Complex a1 = {2.5, 4.5}, a2 = {3.0, 2.75}, res;
    division(&a1, &a2, &res);
    cout << res.re << " + " << res.im << "i"; // se va afisa "1.2 + 0.4i"return 0; }
}