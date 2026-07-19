#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakablePowerupDropDefinition_t.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x310
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_PickupItemSpawnerVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // metadata: MPropertyDescription "Model"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hModel;
            char m_hModel[0xe0]; // 0x28            
            float m_flModelScale; // 0x108            
            uint8_t _pad010c[0x4]; // 0x10c
            // m_InactiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InactiveParticle;
            char m_InactiveParticle[0xe0]; // 0x110            
            // m_ActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ActiveParticle;
            char m_ActiveParticle[0xe0]; // 0x1f0            
            // metadata: MPropertyStartGroup "Pickup rewards"
            // m_vecPrimaryPickups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::BreakablePowerupDropDefinition_t> m_vecPrimaryPickups;
            char m_vecPrimaryPickups[0x18]; // 0x2d0            
            // metadata: MPropertyDescription "Ignore Primary Pickups and only spawn one type"
            // m_sSinglePickupOverride has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<0> m_sSinglePickupOverride;
            char m_sSinglePickupOverride[0x10]; // 0x2e8            
            // metadata: MPropertyStartGroup "Gameplay"
            // metadata: MPropertyDescription "Set to -1 to not spawn until invoked by another system"
            float m_flInitialSpawnTime; // 0x2f8            
            float m_flRespawnTime; // 0x2fc            
            // metadata: MPropertyDescription "Set to -1 to not spawn until invoked by another system"
            float m_flInitialSpawnTimeTest; // 0x300            
            float m_flRespawnTimeTest; // 0x304            
            bool m_bRespawnTimerStartsAfterPickup; // 0x308            
            uint8_t _pad0309[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_PickupItemSpawnerVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_PickupItemSpawnerVData) == 0x310);
    };
};
