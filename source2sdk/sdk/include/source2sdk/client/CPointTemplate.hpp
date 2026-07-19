#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CLogicalEntity.hpp"
#include "source2sdk/client/PointTemplateClientOnlyEntityBehavior_t.hpp"
#include "source2sdk/client/PointTemplateOwnerSpawnGroupType_t.hpp"

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
        // Size: 0x698
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointTemplate : public source2sdk::client::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszWorldName; // 0x600            
            CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x608            
            CUtlSymbolLarge m_iszEntityFilterName; // 0x610            
            float m_flTimeoutInterval; // 0x618            
            bool m_bAsynchronouslySpawnEntities; // 0x61c            
            uint8_t _pad061d[0x3]; // 0x61d
            // metadata: MNotSaved
            source2sdk::client::PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x620            
            // metadata: MNotSaved
            source2sdk::client::PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x624            
            // m_createdSpawnGroupHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_createdSpawnGroupHandles;
            char m_createdSpawnGroupHandles[0x18]; // 0x628            
            // m_SpawnedEntityHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityHandle> m_SpawnedEntityHandles;
            char m_SpawnedEntityHandles[0x18]; // 0x640            
            // metadata: MNotSaved
            HSCRIPT m_ScriptSpawnCallback; // 0x658            
            // metadata: MNotSaved
            HSCRIPT m_ScriptCallbackScope; // 0x660            
            // m_OnEntitySpawned has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlVector<CEntityHandle>> m_OnEntitySpawned;
            char m_OnEntitySpawned[0x30]; // 0x668            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointTemplate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPointTemplate) == 0x698);
    };
};
