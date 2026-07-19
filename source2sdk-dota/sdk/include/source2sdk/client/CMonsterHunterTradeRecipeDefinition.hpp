#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMonsterHunterMaterialRarity.hpp"
#include "source2sdk/client/EMonsterHunterMaterialTradeConversion.hpp"

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
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMonsterHunterTradeRecipeDefinition
        {
        public:
            source2sdk::client::EMonsterHunterMaterialTradeConversion m_eTradeConversion; // 0x0            
            std::int32_t m_nOfferCount; // 0x4            
            std::int32_t m_nResultCount; // 0x8            
            bool m_bOfferTokensMustBeTheSame; // 0xc            
            bool m_bCanChooseResult; // 0xd            
            uint8_t _pad000e[0x2]; // 0xe
            CUtlString m_strLocTitle; // 0x10            
            CUtlString m_strDescription; // 0x18            
            std::uint32_t m_unUnlockPrerequisiteActionID; // 0x20            
            std::uint32_t m_unResultActionID; // 0x24            
            source2sdk::client::EMonsterHunterMaterialRarity m_eRequiredOfferRarity; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_eTradeConversion) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_nOfferCount) == 0x4);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_nResultCount) == 0x8);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_bOfferTokensMustBeTheSame) == 0xc);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_bCanChooseResult) == 0xd);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_strLocTitle) == 0x10);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_strDescription) == 0x18);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_unUnlockPrerequisiteActionID) == 0x20);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_unResultActionID) == 0x24);
        static_assert(offsetof(source2sdk::client::CMonsterHunterTradeRecipeDefinition, m_eRequiredOfferRarity) == 0x28);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterTradeRecipeDefinition) == 0x30);
    };
};
