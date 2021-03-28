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
std::optional<wchar_t> perso = new TestCharacter("Jean Luc");
std::wcout << perso.getName() << std::endl;
std::wcout << perso.getLife() << std::endl;
std::wcout << perso.getAgility() << std::endl;
std::wcout << perso.getStrength() << std::endl;
std::wcout << perso.getWit() << std::endl;
std::wcout << perso.getRPGClass() << std::endl;
perso.attack("my weapon ");
}
