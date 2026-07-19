#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x220
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_NeutralBugVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            std::int32_t m_iGoldReward; // 0x28            
            float m_flRadius; // 0x2c            
            float m_flDropDownRate; // 0x30            
            float m_flRespawnTime; // 0x34            
            float m_flRespawnTimeHeroTest; // 0x38            
            float m_flWaitTimeMax; // 0x3c            
            float m_flPlayerCheckThink; // 0x40            
            float m_flPlayerCheckDistanceM; // 0x44            
            float m_flMaxMoveDistance; // 0x48            
            float m_flMinMoveDistance; // 0x4c            
            float m_flMoveSpeedMin; // 0x50            
            float m_flMoveSpeedMax; // 0x54            
            float m_flValidDirectionDist; // 0x58            
            float m_flValidMinDist; // 0x5c            
            // metadata: MPropertyStartGroup "Visuals"
            // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
            char m_sModelName[0xe0]; // 0x60            
            // m_DeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle;
            char m_DeathParticle[0xe0]; // 0x140            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_NeutralBugVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_NeutralBugVData) == 0x220);
    };
};
