#include "include/testsuite.h"
#include <stdio.h>

int main()
{
	int tests_nr = -1, ret;
	FILE *infile;

	infile = fopen("test_nr", "r");
	if (infile == NULL)
	{
		printf("ERROR: test_nr could not be opened!\n");
		exit(1);
	}

	ret = fscanf(infile, "%d", &tests_nr);
	if (ret == 0)
	{
		printf("ERROR: file test_nr should not be empty!\n");
		exit(1);
	}
	
	fclose(infile);

	if (tests_nr == -1)
	{
		printf("\nSelect test suite: [1..11]\n");
		printf("\t[0]\tALL\n");
		printf("\t[1]\tMETA AEAD, META ARMOR, META CIPHERS, META HASH, META MAC, AES, ARCTWO, ARCFOUR, BASE16, BASE64, BLOWFISH,\n");
		printf("\t\tBUFFER, CAMELLIA, CAST128, CBC, CCM, CFM, CHACHA, POLY1305, CMAC, CTR, DES, DES3, EAX, GCM, GOSTHASH94\n");
		printf("\t[2]\tHKDF, HMAC, KNUTH, MD2, MD4, MD5\n");
		printf("\t[3]\tPBKDF2, RIPEMD160, SALSA20, SERPENT\n");
		printf("\t[4]\tSHA1 - WILL TAKE A LONG TIME\n");
		printf("\t[5]\tSHA3-224\n");
		printf("\t[6]\tSHA3-256\n");
		printf("\t[7]\tSHA3-384\n");
		printf("\t[8]\tSHA3-512\n");
		printf("\t[9]\tSHA3 PERMUTE\n");
		printf("\t[10]\tSHA224, SHA256, SHA384, SHA512, SHA512-224, SHA512-256, SHAKE256, TWOFISH, UMAC\n");
		printf("\t[11]\tXTS, YARROW\n");

		sleep(20);

		return 0;
	}

	if (tests_nr == 1 || tests_nr == 0)
	{
		printf("Testing META AEAD...\n");
		test_main_meta_aead();
		printf("PASSED\n");

		printf("Testing META ARMOR...\n");
		test_main_meta_armor();
		printf("PASSED\n");

		printf("Testing META CIPHERS...\n");
		test_main_meta_ciphers();
		printf("PASSED\n");

		printf("Testing META HASH...\n");
		test_main_meta_hash();
		printf("PASSED\n");

		printf("Testing META MAC...\n");
		test_main_meta_mac();
		printf("PASSED\n");

		printf("Testing AES...\n");
		test_main_aes();
		printf("PASSED\n");

		printf("Testing ARCTWO...\n");
		test_main_arctwo();
		printf("PASSED\n");

		printf("Testing ARCFOUR...\n");
		test_main_arcfour();
		printf("PASSED\n");

		printf("Testing BASE16...\n");
		test_main_base16();
		printf("PASSED\n");

		printf("Testing BASE64...\n");
		test_main_base64();
		printf("PASSED\n");

		printf("Testing BLOWFISH...\n");
		test_main_blowfish();
		printf("PASSED\n");

		printf("Testing BUFFER...\n");
		test_main_buffer();
		printf("PASSED\n");

		printf("Testing CAMELLIA...\n");
		test_main_camellia();
		printf("PASSED\n");

		printf("Testing CAST128...\n");
		test_main_cast128();
		printf("PASSED\n");

		printf("Testing CBC...\n");
		test_main_cbc();
		printf("PASSED\n");

		printf("Testing CCM...\n");
		test_main_ccm();
		printf("PASSED\n");

		printf("Testing CFB...\n");
		test_main_cfb();
		printf("PASSED\n");

		printf("Testing CHACHA...\n");
		test_main_chacha();
		printf("PASSED\n");

		printf("Testing POLY1305...\n");
		test_main_poly1305();
		printf("PASSED\n");

		printf("Testing CHACHA-POLY1305...\n");
		test_main_chacha_poly1305();
		printf("PASSED\n");

		printf("Testing CMAC...\n");
		test_main_cmac();
		printf("PASSED\n");

		printf("Testing CTR...\n");
		test_main_ctr();
		printf("PASSED\n");

		printf("Testing DES...\n");
		test_main_des();
		printf("PASSED\n");

		printf("Testing DES3...\n");
		test_main_des3();
		printf("PASSED\n");

		printf("Testing EAX...\n");
		test_main_eax();
		printf("PASSED\n");

		printf("Testing GCM...\n");
		test_main_gcm();
		printf("PASSED\n");

		printf("Testing GOSTHASH94...\n");
		test_main_gosthash94();
		printf("PASSED\n");
	}
	if (tests_nr == 2 || tests_nr == 0)
	{
		printf("Testing HKDF...\n");
		test_main_hkdf();
		printf("PASSED\n");

		printf("Testing HMAC...\n");
		test_main_hmac();
		printf("PASSED\n");

		printf("Testing KNUTH...\n");
		test_main_knuth();
		printf("PASSED\n");

		printf("Testing MD2...\n");
		test_main_md2();
		printf("PASSED\n");

		printf("Testing MD4...\n");
		test_main_md4();
		printf("PASSED\n");

		printf("Testing MD5-COMPAT...\n");
		test_main_md5_compat();
		printf("PASSED\n");

		printf("Testing MD5...\n");
		test_main_md5();
		printf("PASSED\n");
	}
	if (tests_nr == 3 || tests_nr == 0)
	{
		printf("Testing PBKDF2...\n");
		test_main_pbkdf2();
		printf("PASSED\n");

		printf("Testing RIPEMD160...\n");
		test_main_ripemd160();
		printf("PASSED\n");

		printf("Testing SALSA20...\n");
		test_main_salsa20();
		printf("PASSED\n");

		printf("Testing SERPENT...\n");
		test_main_serpent();
		printf("PASSED\n");
	}
	if (tests_nr == 4 || tests_nr == 0)
	{
		printf("Testing SHA1...\n");
		test_main_sha1();
		printf("PASSED\n");

		printf("Testing SHA1 HUGE...\n");
		test_main_sha1_huge();
		printf("PASSED\n");
	}
	if (tests_nr == 5 || tests_nr == 0)
	{
		printf("Testing SHA3-224...\n");
		test_main_sha3_224();
		printf("PASSED\n");
	}
	if (tests_nr == 6 || tests_nr == 0)
	{
		printf("Testing SHA3 256...\n");
		test_main_sha3_256();
		printf("PASSED\n");
	}
	if (tests_nr == 7 || tests_nr == 0)
	{
		printf("Testing SHA3-384...\n");
		test_main_sha3_384();
		printf("PASSED\n");
	}
	if (tests_nr == 8 || tests_nr == 0)
	{
		printf("Testing SHA3-512...\n");
		test_main_sha3_512();
		printf("PASSED\n");
	}
	if (tests_nr == 9 || tests_nr == 0)
	{
		printf("Testing SHA3 PERMUTE...\n");
		test_main_sha3_permute();
		printf("PASSED\n");
	}
	if (tests_nr == 10 || tests_nr == 0)
	{
		printf("Testing SHA224...\n");
		test_main_sha224();
		printf("PASSED\n");

		printf("Testing SHA256...\n");
		test_main_sha256();
		printf("PASSED\n");

		printf("Testing SHA384...\n");
		test_main_sha384();
		printf("PASSED\n");

		printf("Testing SHA512...\n");
		test_main_sha512();
		printf("PASSED\n");

		printf("Testing SHA512-224...\n");
		test_main_sha512_224();
		printf("PASSED\n");

		printf("Testing SHA512-256...\n");
		test_main_sha512_256();
		printf("PASSED\n");

		printf("Testing SHAKE256...\n");
		test_main_shake256();
		printf("PASSED\n");

		printf("Testing TWOFISH...\n");
		test_main_twofish();
		printf("PASSED\n");

		printf("Testing UMAC...\n");
		test_main_umac();
		printf("PASSED\n");
	}
	if (tests_nr == 11 || tests_nr == 0)
	{
		printf("Testing XTS...\n");
		test_main_xts();
		printf("PASSED\n");

		printf("Testing YARROW...\n");
		test_main_yarrow();
		printf("PASSED\n");
	}

	printf("All tests passed\n");
	sleep(5);

	return 0;
}
