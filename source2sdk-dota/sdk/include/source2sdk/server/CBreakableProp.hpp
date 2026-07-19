#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseProp.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x930
        // Has VTable
        // Construct allowed
        // MDisableDataDescValidation
        #pragma pack(push, 1)
        class CBreakableProp : public source2sdk::server::CBaseProp
        {
        public:
            uint8_t _pad07d0[0x8]; // 0x7d0
            source2sdk::server::CPropDataComponent m_CPropDataComponent; // 0x7d8            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0x818            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x830            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x20]; // 0x848            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0x868            
            float m_impactEnergyScale; // 0x880            
            std::int32_t m_iMinHealthDmg; // 0x884            
            QAngle m_preferredCarryAngles; // 0x888            
            float m_flPressureDelay; // 0x894            
            float m_flDefBurstScale; // 0x898            
            Vector m_vDefBurstOffset; // 0x89c            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0x8a8            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0x8ac            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0x8b0            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0x8b4            
            CUtlString m_strBreakableContentsPropGroupOverride; // 0x8b8            
            CUtlString m_strBreakableContentsParticleOverride; // 0x8c0            
            bool m_bHasBreakPiecesOrCommands; // 0x8c8            
            uint8_t _pad08c9[0x3]; // 0x8c9
            float m_explodeDamage; // 0x8cc            
            float m_explodeRadius; // 0x8d0            
            uint8_t _pad08d4[0x4]; // 0x8d4
            CGlobalSymbol m_sExplosionType; // 0x8d8            
            float m_explosionDelay; // 0x8e0            
            uint8_t _pad08e4[0x4]; // 0x8e4
            CUtlSymbolLarge m_explosionBuildupSound; // 0x8e8            
            CUtlSymbolLarge m_explosionCustomEffect; // 0x8f0            
            CUtlSymbolLarge m_explosionCustomSound; // 0x8f8            
            CUtlSymbolLarge m_explosionModifier; // 0x900            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0x908            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x90c            
            float m_flDefaultFadeScale; // 0x910            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0x914            
            CUtlSymbolLarge m_iszPuntSound; // 0x918            
            bool m_bUsePuntSound; // 0x920            
            bool m_bOriginalBlockLOS; // 0x921            
            uint8_t _pad0922[0xe];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // bool InputSetEnableBreaking; // 0x0
            // bool InputSetEnableCollisions; // 0x0
            // void InputForceDrop; // 0x0
            // bool InputSetNavIgnore; // 0x0
            // void InputEnablePuntSound; // 0x0
            // void InputDisablePuntSound; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBreakableProp) == 0x930);
    };
};
