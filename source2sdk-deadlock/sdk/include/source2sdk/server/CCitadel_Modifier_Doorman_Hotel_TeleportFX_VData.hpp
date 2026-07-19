#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x790
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Doorman_Hotel_TeleportFX_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strKeyLoopSound; // 0x750            
            CSoundEventName m_strKeyLoopStartSound; // 0x760            
            CSoundEventName m_strKeyLoopEndSound; // 0x770            
            CSoundEventName m_HitSound; // 0x780            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Doorman_Hotel_TeleportFX_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Doorman_Hotel_TeleportFX_VData) == 0x790);
    };
};
