/**
 * WaxCleaning.h<br>
 * Copyright
 *
 */

#ifndef WAXCLEANING_H_
#define WAXCLEANING_H_

#include "Cleaning.h"

class WaxCleaning : public Cleaning {
 public:
  //! Constractor
  WaxCleaning();
  //! Destructor
  virtual ~WaxCleaning();
  virtual void ShowCleaningMethod();
  virtual void Start();
  virtual void PreWork();
  virtual void DoWork();
  virtual void PostWork();
  virtual void Ending();

 protected:
 private:
};

#endif  // WAXCLEANING_H_
