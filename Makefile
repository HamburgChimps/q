all:
		gcc -o hc_q_test hc_q_test.c hc_q.c

clean:
	rm -rf hc_q_test
