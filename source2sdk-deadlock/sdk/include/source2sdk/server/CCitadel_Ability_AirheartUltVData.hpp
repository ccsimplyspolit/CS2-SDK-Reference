#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1d70
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_AirheartUltVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_FlareParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlareParticle;
            char m_FlareParticle[0xe0]; // 0x1818            
            // m_TeleportParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportParticle;
            char m_TeleportParticle[0xe0]; // 0x18f8            
            // m_PackageOpenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PackageOpenParticle;
            char m_PackageOpenParticle[0xe0]; // 0x19d8            
            // m_PackagePunchedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PackagePunchedParticle;
            char m_PackagePunchedParticle[0xe0]; // 0x1ab8            
            // m_PackageCrashedOnGroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PackageCrashedOnGroundParticle;
            char m_PackageCrashedOnGroundParticle[0xe0]; // 0x1b98            
            // m_PackageModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_PackageModel;
            char m_PackageModel[0xe0]; // 0x1c78            
            float m_flModelScale; // 0x1d58            
            // metadata: MPropertyStartGroup "Package"
            float m_flGravitySlowFalling; // 0x1d5c            
            float m_flGravityFalling; // 0x1d60            
            float m_flMaxElevation; // 0x1d64            
            float m_flSlowFallElevationStart; // 0x1d68            
            float m_flSlowFallElevationEnd; // 0x1d6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_AirheartUltVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_AirheartUltVData) == 0x1d70);
    };
};
