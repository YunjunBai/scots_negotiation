/*
* SymbolicNetwork.hh
* created on Jan.2019
*/

class SymbolicNetwork
{
protected:
	/*var:num_of_model: the number of components in the entire system*/
	int num_of_model;
	/*array[]:connectionMap: 
	if there a connection from i component to j component, then connectionMap[j]=i*/
	std::vector<int> connectionMap;
	/*var: symbolicModel_i, (not sure if need)
	the abstraction model for each component i*/
	SymbolicModel *symbolicModel;
	/*array[] :internalDisInput:  
	connectionMap(j->i), for i component, the internal disturbance input internalDisInput_i is a subset of statespace of j component */
	std::unique_ptr<SymbolicSet[]> internalDisInput;
	
public:
	/*constructor: given the number of component and their connection relationship
	* construct a network graph
	*/
	SymbolicNetwork(int num_of_model,
					std::vector<int> connectionMap){

	};

	~SymbolicNetwork();
	
};