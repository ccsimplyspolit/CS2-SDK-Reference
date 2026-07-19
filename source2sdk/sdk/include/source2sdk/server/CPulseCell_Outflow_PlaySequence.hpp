#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPulseCell_Outflow_PlaySceneBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x140
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseCell_Outflow_PlaySequence : public source2sdk::server::CPulseCell_Outflow_PlaySceneBase
        {
        public:
            CUtlString m_ParamSequenceName; // 0x138            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Outflow_PlaySequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_Outflow_PlaySequence) == 0x140);
    };
};
