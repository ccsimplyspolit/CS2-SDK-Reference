#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadelModifier;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1810
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsTransformed"
        // static metadata: MNetworkVarNames "GameTime_t m_flWerewolfStartTime"
        #pragma pack(push, 1)
        class CCitadel_Werewolf_Transformation : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x600]; // 0x11d8
            // metadata: MNetworkEnable
            bool m_bIsTransformed; // 0x17d8            
            bool m_bIsTransformingBack; // 0x17d9            
            uint8_t _pad17da[0x2]; // 0x17da
            source2sdk::entity2::GameTime_t m_tLastRegenComponentThinkTime; // 0x17dc            
            uint8_t _pad17e0[0x4]; // 0x17e0
            source2sdk::entity2::GameTime_t m_tForceTransformTime; // 0x17e4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flWerewolfStartTime; // 0x17e8            
            uint8_t _pad17ec[0x4]; // 0x17ec
            source2sdk::client::CCitadelModifier* m_pWerewolfModifier; // 0x17f0            
            uint8_t _pad17f8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Werewolf_Transformation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Werewolf_Transformation) == 0x1810);
    };
};
