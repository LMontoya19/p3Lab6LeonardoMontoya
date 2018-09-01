main:	Cliente.o ClienteEmpresarial.o ClienteIndividual.o EmpresarialInternacional.o EmpresarialNacional.o main.o Plantas.o PlantasPrivadas.o PlantasPublicas.o PPMixtas.o PPSencillas.o
	g++ Cliente.o ClienteEmpresarial.o ClienteIndividual.o EmpresarialInternacional.o EmpresarialNacional.o main.o Plantas.o PlantasPrivadas.o PlantasPublicas.o PPMixtas.o PPSencillas.o -o main
	rm *.o
main.o: main.cpp Cliente.cpp ClienteEmpresarial.cpp ClienteIndividual.cpp EmpresarialInternacional.cpp EmpresarialNacional.cpp Plantas.cpp PlantasPrivadas.cpp PlantasPublicas.cpp PPSencillas.cpp PPMixtas.cpp
	g++ -c main.cpp
PPSencillas.o:	PPSencillas.cpp PlantasPublicas.cpp Cliente.cpp
	g++ -c PPSencillas.cpp
PlantasPublicas.o:	PlantasPublicas.cpp Plantas.cpp
	g++ -c PlantasPublicas.cpp
PlantasPrivadas.o: PlantasPrivadas.cpp Plantas.cpp Cliente.cpp
	g++ -c PlantasPrivadas.cpp
Plantas.o:	Plantas.cpp
	g++ -c Plantas.cpp
EmpresarialInternacional.o:	EmpresarialInternacional.cpp ClienteEmpresarial.cpp
	g++ -c EmpresarialInternacional.cpp
EmpresarialNacional.o:	EmpresarialNacional.cpp ClienteEmpresarial.cpp
	g++ -c EmpresarialNacional.cpp
ClienteIndividual.o:	ClienteIndividual.cpp Cliente.cpp
	g++ -c ClienteIndividual.cpp
ClienteEmpresarial.o:	ClienteEmpresarial.cpp Cliente.cpp
	g++ -c ClienteEmpresarial.cpp
Cliente.o:	Cliente.cpp
	g++ -c Cliente.cpp
PPMixtas.o:	PPMixtas.cpp PlantasPublicas.cpp Cliente.cpp
	g++ -c PPMixtas.cpp