int int main(int argc, char const *argv[]) {

int name(x) {
  if (x > 0) {
    return name(x-1);
  } else {
    return 0;
  }
}
int number = 0;

scanf("%i\n", number);
printf("%i\n",number);
name(number)
printf("%s\n", number);
  return 0;
}
