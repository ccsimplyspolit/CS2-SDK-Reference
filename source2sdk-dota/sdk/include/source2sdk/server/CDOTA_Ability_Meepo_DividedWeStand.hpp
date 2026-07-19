#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x598
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Meepo_DividedWeStand : public source2sdk::server::CDOTABaseAbility
        {
        public:
            bool m_bInventoryUpdating; // 0x580            
            uint8_t _pad0581[0x3]; // 0x581
            std::int32_t m_nWhichDividedWeStand; // 0x584            
            std::int32_t m_nNumDividedWeStand; // 0x588            
            // m_entPrimeDividedWeStand has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Ability_Meepo_DividedWeStand> m_entPrimeDividedWeStand;
            char m_entPrimeDividedWeStand[0x4]; // 0x58c            
            // m_entNextDividedWeStand has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Ability_Meepo_DividedWeStand> m_entNextDividedWeStand;
            char m_entNextDividedWeStand[0x4]; // 0x590            
            std::int32_t m_iPendingUpgrades; // 0x594            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Meepo_DividedWeStand because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Meepo_DividedWeStand) == 0x598);
    };
};
