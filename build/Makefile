CC = gcc
.PHONY: filesavetest mlp_mnist binary

MLP_INCLUDE = -I../mnist -I../networks/MLP
RNN_INCLUDE = -I../networks/RNN

recurrent_demo:
	gcc $(RNN_INCLUDE) $(MLP_INCLUDE) ../networks/MLP/MLP.c ../networks/RNN/RNN.c ../examples/recurrent_demo.c -o $@.out -lm
sequence:
	gcc $(RNN_INCLUDE) $(MLP_INCLUDE) ../networks/MLP/MLP.c ../networks/RNN/RNN.c ../examples/sequence.c -o $@.out -lm
shakespeare:
	gcc $(RNN_INCLUDE) $(MLP_INCLUDE) ../networks/MLP/MLP.c ../networks/RNN/RNN.c ../examples/shakespeare.c -o $@.out -lm
character:
	gcc $(RNN_INCLUDE) $(MLP_INCLUDE) ../networks/MLP/MLP.c ../networks/RNN/RNN.c ../examples/character.c -o $@.out -lm
filesave:
	gcc $(MLP_INCLUDE) ../mnist/mnist.c ../networks/MLP/MLP.c ../examples/filesave.c -o $@.out -lm
fileload:
	gcc $(MLP_INCLUDE) ../mnist/mnist.c ../networks/MLP/MLP.c ../examples/fileload.c -o $@.out -lm
mlp_mnist:
	gcc $(MLP_INCLUDE) ../mnist/mnist.c ../networks/MLP/MLP.c ../examples/mlp_mnist.c -o $@.out -lm
binary:
	gcc $(MLP_INCLUDE) ../mnist/mnist.c ../networks/MLP/MLP.c ../examples/binary.c -o $@.out -lm
clean:
	rm *.out
