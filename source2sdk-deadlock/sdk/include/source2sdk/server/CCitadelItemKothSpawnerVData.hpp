#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelItemPickupVData.hpp"

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
        // Size: 0x1e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelItemKothSpawnerVData : public source2sdk::server::CCitadelItemPickupVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_OnGroundTouchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_OnGroundTouchParticle;
            char m_OnGroundTouchParticle[0xe0]; // 0x108            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelItemKothSpawnerVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelItemKothSpawnerVData) == 0x1e8);
    };
};
