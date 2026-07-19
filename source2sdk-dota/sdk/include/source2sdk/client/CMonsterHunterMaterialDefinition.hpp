#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMonsterHunterMaterialRarity.hpp"
#include "source2sdk/client/MonsterHunterMaterialID_t.hpp"

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
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CMonsterHunterMaterialDefinition
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_id_material"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::MonsterHunterMaterialID_t m_unID; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            // metadata: MPropertyDescription
            CUtlString m_strName; // 0x8            
            // metadata: MPropertyDescription
            source2sdk::client::EMonsterHunterMaterialRarity m_eRarity; // 0x10            
            bool m_bUniversal; // 0x14            
            bool m_bHidden; // 0x15            
            bool m_bDeprecated; // 0x16            
            uint8_t _pad0017[0x1];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_unID) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_strName) == 0x8);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_eRarity) == 0x10);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_bUniversal) == 0x14);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_bHidden) == 0x15);
        static_assert(offsetof(source2sdk::client::CMonsterHunterMaterialDefinition, m_bDeprecated) == 0x16);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterMaterialDefinition) == 0x18);
    };
};
