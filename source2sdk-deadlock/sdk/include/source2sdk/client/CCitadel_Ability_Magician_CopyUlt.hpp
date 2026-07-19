#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/LingeringCopiedAbility_t.hpp"
#include "source2sdk/client/ModelChange_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
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
        // Size: 0x14e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHasUsedCopiedUlt"
        // static metadata: MNetworkVarNames "bool m_bHasCopiedUlt"
        // static metadata: MNetworkVarNames "bool m_bIsModelSwapped"
        // static metadata: MNetworkVarNames "GameTime_t m_timeSwappedModel"
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_pActiveCopyUltimateAbility"
        // static metadata: MNetworkVarNames "HeroID_t m_nCopiedHeroID"
        #pragma pack(push, 1)
        class CCitadel_Ability_Magician_CopyUlt : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x200]; // 0x11d8
            // metadata: MNetworkEnable
            bool m_bHasUsedCopiedUlt; // 0x13d8            
            // metadata: MNetworkEnable
            bool m_bHasCopiedUlt; // 0x13d9            
            // metadata: MNetworkEnable
            bool m_bIsModelSwapped; // 0x13da            
            uint8_t _pad13db[0x1]; // 0x13db
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_timeSwappedModel; // 0x13dc            
            // metadata: MNetworkEnable
            // m_pActiveCopyUltimateAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_pActiveCopyUltimateAbility;
            char m_pActiveCopyUltimateAbility[0x4]; // 0x13e0            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nCopiedHeroID; // 0x13e4            
            // m_vecLingeringCopiedAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::LingeringCopiedAbility_t> m_vecLingeringCopiedAbilities;
            char m_vecLingeringCopiedAbilities[0x18]; // 0x13e8            
            source2sdk::client::ModelChange_t m_ModelChange; // 0x1400            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Magician_CopyUlt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Magician_CopyUlt) == 0x14e8);
    };
};
