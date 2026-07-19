#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerPawn;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x12f0
        // Has VTable
        // Construct allowed
        // MDisableDataDescValidation
        #pragma pack(push, 1)
        class C_BreakableProp : public source2sdk::client::CBaseProp
        {
        public:
            source2sdk::client::CPropDataComponent m_CPropDataComponent; // 0x11b0            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0x11f0            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0x1208            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x20]; // 0x1220            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0x1240            
            float m_impactEnergyScale; // 0x1258            
            std::int32_t m_iMinHealthDmg; // 0x125c            
            float m_flPressureDelay; // 0x1260            
            float m_flDefBurstScale; // 0x1264            
            Vector m_vDefBurstOffset; // 0x1268            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0x1274            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0x1278            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0x127c            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0x1280            
            uint8_t _pad1284[0x4]; // 0x1284
            CUtlString m_strBreakableContentsPropGroupOverride; // 0x1288            
            CUtlString m_strBreakableContentsParticleOverride; // 0x1290            
            bool m_bHasBreakPiecesOrCommands; // 0x1298            
            uint8_t _pad1299[0x3]; // 0x1299
            float m_explodeDamage; // 0x129c            
            float m_explodeRadius; // 0x12a0            
            uint8_t _pad12a4[0x4]; // 0x12a4
            CGlobalSymbol m_sExplosionType; // 0x12a8            
            float m_explosionDelay; // 0x12b0            
            uint8_t _pad12b4[0x4]; // 0x12b4
            CUtlSymbolLarge m_explosionBuildupSound; // 0x12b8            
            CUtlSymbolLarge m_explosionCustomEffect; // 0x12c0            
            CUtlSymbolLarge m_explosionCustomSound; // 0x12c8            
            CUtlSymbolLarge m_explosionModifier; // 0x12d0            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0x12d8            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x12dc            
            float m_flDefaultFadeScale; // 0x12e0            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0x12e4            
            uint8_t _pad12e8[0x8];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // bool InputSetEnableBreaking; // 0x0
            // bool InputSetEnableCollisions; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BreakableProp) == 0x12f0);
    };
};
