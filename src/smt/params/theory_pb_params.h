/*++
Copyright (c) 2013 Microsoft Corporation

Module Name:

    theory_pb_params.h

Abstract:

    <abstract>

Author:

    Nikolaj Bjorner (nbjorner) 2014-01-01

Revision History:

--*/
#ifndef _THEORY_PB_PARAMS_H_
#define _THEORY_PB_PARAMS_H_

#include"params.h"


struct theory_pb_params {
    unsigned m_pb_conflict_frequency;
    bool     m_pb_learn_complements;
    bool     m_pb_enable_compilation;
    bool     m_pb_enable_simplex;
    theory_pb_params(params_ref const & p = params_ref()):
        m_pb_conflict_frequency(0),
        m_pb_learn_complements(true),
        m_pb_enable_compilation(true),
        m_pb_enable_simplex(false)    
    {}
    
    void updt_params(params_ref const & p);
};

#endif /* _THEORY_PB_PARAMS_H_ */

