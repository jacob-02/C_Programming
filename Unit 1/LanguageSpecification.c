/*

Language Specification:

    Documentation that defines the programming language for the implementers and the users
    They are detailed and formal
    Used in the case of ambiguity

    Forms of the documentation:
        syntax definition
        semantics definition
    
    Description of the behaviour of the compiler

    Model Implementation:
        A program that implements all the requirements from a corresponding specification


Standards:

    de Facto : Legally recoginized. Whether the practice exist in reality or not
    de Jure : Exists in reality even if not legally recognized

    Each language might have one or more implemantations which acts as deFacto
    Language can be implemented and then specified

Behaviors:

    Locale Specific
    Unspecified Behavior - Evaluation of arguments in printf function
    Implementation Defined Behavior -  Size of each type
    Undefined Behavior - Infinity errors
*/

#include <stdio.h>

int main()
{
    //printf("%d\n", 25/0);   // Undefined error
    float a = 23.4;
    int b = 0;
    b = a/0;
    printf("a is %f\n", a);
    printf("b is %d\n", b);
}