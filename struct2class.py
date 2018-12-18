#Structure to cpp class conversion(OLEDB accessor class)
#(C) 2018 Rupesh Sreeraman
#use struct.txt fill structure variable without prefix type
# instead of int nCount; use int Count;
# use semicoloun at the end of lines 

fh = open('struct.txt')
varlst=[]
member_vars=[]
while True:
    line = fh.readline()
    variables=line.split(" ")
    member_vars.append(line)
    variable=str(variables[len(variables)-1])

    split_pos=variable.find('[')
    if split_pos>-1:
        print("Found array decl :",variable[:split_pos])
        varlst.append(variable[:split_pos])
    else:
        nsplit_pos=variable.find(';')
        strVar=variable[:nsplit_pos]
        if len(strVar)>0:
            varlst.append(strVar)
    #print(line)
    if not line:
        break

print("Variables :" ,len(varlst))

strclass="class CTestAccessor\n"
strclass+="{\n"
strclass+="public:\n"
for vari in member_vars:
    strclass+="\t"+vari+""

strclass+="\n\n"
for vari in varlst:
    #print(vari)
    strclass+="\tDBSTATUS m_dw"+vari+"Status;\n"

strclass+="\n"
for vari in varlst:
    strclass+="\tDBLENGTH m_dw"+vari+"Length;\n"

strclass+="\n"
strclass+="DEFINE_COMMAND_EX(CTestAccessor, L\"{ CALL dbo.Spc_GetTestData(?) }\")\n"
strclass+="\n"
strclass+="BEGIN_COLUMN_MAP(CTestAccessor)\n"
index=0
for vari in varlst:
    index=index+1
    strclass+="\tCOLUMN_ENTRY_LENGTH_STATUS("+str(index)+","+vari+",m_dw"+vari+"Length,"+ "m_dw"+vari+"Status);\n"

strclass+="END_COLUMN_MAP()\n"

strclass+="};"


with open("OutputAccessorClass.cpp", "w") as text_file:
    text_file.write(strclass)

print("Wrote "+str(len(strclass.split('\n')))+" lines of cpp code")