#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/server/HandshakeInfo_t.hpp"
#include "source2sdk/server/LastIncomingHit_t.hpp"

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
        // Size: 0xa0
        // Has VTable
        #pragma pack(push, 1)
        class CAI_AnimGraphServices : public source2sdk::client::CAI_Component
        {
        public:
            source2sdk::server::HandshakeInfo_t m_pHandshakeInfo[2]; // 0x50            
            source2sdk::server::LastIncomingHit_t m_LastIncomingHit; // 0x80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_AnimGraphServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_AnimGraphServices) == 0xa0);
    };
};
