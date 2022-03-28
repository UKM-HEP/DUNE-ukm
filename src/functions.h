#define functions_h

Int_t postproc::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
   
  return 1;
}

void postproc::turnOnBranches(std::vector<std::string> branchIn)
{
  fChain->SetBranchStatus("*",0);  // disable all branches
  for ( auto& branch : branchIn )
    fChain->SetBranchStatus( branch.c_str() , 1 );  // activate branchname
}
