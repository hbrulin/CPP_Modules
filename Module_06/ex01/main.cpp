#include "serial.hpp"

void * serialize(void)
{
	static std::string alnum = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	static size_t size = alnum.size();
	uint8_t *bytes = new uint8_t[8 + 4 + 8]; //uint8_t is the same as a byte.
    for (size_t i = 0; i < 8; i++) //size_t can store the maximum size of a theoretically possible object of any type. good for array indexing
        bytes[i] = alnum[rand() % size];
    *reinterpret_cast<int*>(bytes + 8) = rand() % 42; //j'utilise ça car je ne peux pas cast en static sinon ça change tout bytes
    for (size_t i = 0; i < 8; i++)
        bytes[8 + 4 + i] = alnum[rand() % size];
    return reinterpret_cast<void*>(bytes);
}

Data * deserialize(void * raw)
{
	Data *data = new Data;

	data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (data);
}

int main()
{
	void *bytes = serialize();
    Data *data = deserialize(bytes);
    std::cout << "s = " << data->s1 << ", n = " << data->n << ", s2 = " << data->s2 << std::endl;
    delete reinterpret_cast<uint8_t*>(bytes);
    delete data;
}