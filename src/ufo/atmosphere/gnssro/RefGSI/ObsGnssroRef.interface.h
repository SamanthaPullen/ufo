/*
 * (C) Copyright 2017 UCAR
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 */

#ifndef UFO_ATMOSPHERE_GNSSRO_REFGSI_FORTRANREFGSI_H_
#define UFO_ATMOSPHERE_GNSSRO_REFGSI_FORTRANREFGSI_H_

#include "ioda/ObsSpace.h"
#include "ufo/Fortran.h"

namespace ufo {

/// Interface to Fortran UFO routines
/*!
 * The core of the UFO is coded in Fortran.
 * Here we define the interfaces to the Fortran code.
 */

extern "C" {
// -----------------------------------------------------------------------------
//  Gnssro observation operators-refractivity (GSI) and their tl/ad
// -----------------------------------------------------------------------------
  void ufo_gnssro_ref_setup_f90(F90hop &, const eckit::Configuration * const *);
  void ufo_gnssro_ref_delete_f90(F90hop &);
  void ufo_gnssro_ref_simobs_f90(const F90hop &, const F90goms &, const ioda::ObsSpace &,
                                 const int &, double &, const F90obias &);
// -----------------------------------------------------------------------------

}  // extern C

}  // namespace ufo
#endif  // UFO_ATMOSPHERE_GNSSRO_REFGSI_FORTRANREFGSI_H_
