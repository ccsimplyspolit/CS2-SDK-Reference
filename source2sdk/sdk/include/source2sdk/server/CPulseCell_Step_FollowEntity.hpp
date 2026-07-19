#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"

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
        // Size: 0x58
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseCell_Step_FollowEntity : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            CUtlString m_ParamBoneOrAttachName; // 0x48            
            CUtlString m_ParamBoneOrAttachNameChild; // 0x50            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Step_FollowEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_Step_FollowEntity) == 0x58);
    };
};
