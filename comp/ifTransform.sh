# transforming
rm if_folder/*
cp examples/* if_folder/

../build/bin/ast-project if_folder/* -- -I/usr/local/lib/clang/11.1.0/include 

# compiling
cd init_asm
rm *
g++ -O1 ../examples/* -S
cd ../

cd if_asm
rm *
g++ -O1 ../if_folder/* -S
cd ../

#comparing
diff -qrs init_asm/ if_asm/
