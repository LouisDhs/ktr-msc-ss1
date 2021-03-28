class Example
{
public:
static void main(std::vector<std::wstring> &args);
};

int main(int argc, char **argv)
{
    std::vector<std::wstring> args(argv + 1, argv + argc);
    Example::main(args);
}

void Example::main(std::vector<std::wstring> &args)
{
std::optional<wchar_t> perso = new TestCharacter("JeanLuc");
std::wcout << perso.getName() << std::endl;
std::wcout << perso.getLife(50) << std::endl;
std::wcout << perso.getAgility(2) << std::endl;
std::wcout << perso.getStrength(2) << std::endl;
std::wcout << perso.getWit(2) << std::endl;
std::wcout << perso.getRPGClass(2) << std::endl;
perso.attack("sword");
println ("Rififi: Rrrrrrrrr ....");
}
