#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ValueRemapperHapticsType_t.hpp"
#include "source2sdk/client/ValueRemapperInputType_t.hpp"
#include "source2sdk/client/ValueRemapperMomentumType_t.hpp"
#include "source2sdk/client/ValueRemapperOutputType_t.hpp"
#include "source2sdk/client/ValueRemapperRatchetType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x640
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointValueRemapper : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bDisabled; // 0x498            
            bool m_bUpdateOnClient; // 0x499            
            uint8_t _pad049a[0x2]; // 0x49a
            source2sdk::client::ValueRemapperInputType_t m_nInputType; // 0x49c            
            CUtlSymbolLarge m_iszRemapLineStartName; // 0x4a0            
            CUtlSymbolLarge m_iszRemapLineEndName; // 0x4a8            
            // m_hRemapLineStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemapLineStart;
            char m_hRemapLineStart[0x4]; // 0x4b0            
            // m_hRemapLineEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemapLineEnd;
            char m_hRemapLineEnd[0x4]; // 0x4b4            
            float m_flMaximumChangePerSecond; // 0x4b8            
            float m_flDisengageDistance; // 0x4bc            
            float m_flEngageDistance; // 0x4c0            
            bool m_bRequiresUseKey; // 0x4c4            
            uint8_t _pad04c5[0x3]; // 0x4c5
            source2sdk::client::ValueRemapperOutputType_t m_nOutputType; // 0x4c8            
            uint8_t _pad04cc[0x4]; // 0x4cc
            CUtlSymbolLarge m_iszOutputEntityName; // 0x4d0            
            CUtlSymbolLarge m_iszOutputEntity2Name; // 0x4d8            
            CUtlSymbolLarge m_iszOutputEntity3Name; // 0x4e0            
            CUtlSymbolLarge m_iszOutputEntity4Name; // 0x4e8            
            // metadata: MNotSaved
            // m_hOutputEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hOutputEntities;
            char m_hOutputEntities[0x18]; // 0x4f0            
            source2sdk::client::ValueRemapperHapticsType_t m_nHapticsType; // 0x508            
            source2sdk::client::ValueRemapperMomentumType_t m_nMomentumType; // 0x50c            
            float m_flMomentumModifier; // 0x510            
            float m_flSnapValue; // 0x514            
            float m_flCurrentMomentum; // 0x518            
            source2sdk::client::ValueRemapperRatchetType_t m_nRatchetType; // 0x51c            
            float m_flRatchetOffset; // 0x520            
            float m_flInputOffset; // 0x524            
            bool m_bEngaged; // 0x528            
            bool m_bFirstUpdate; // 0x529            
            uint8_t _pad052a[0x2]; // 0x52a
            float m_flPreviousValue; // 0x52c            
            source2sdk::entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x530            
            VectorWS m_vecPreviousTestPoint; // 0x534            
            // m_hUsingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hUsingPlayer;
            char m_hUsingPlayer[0x4]; // 0x540            
            float m_flCustomOutputValue; // 0x544            
            CUtlSymbolLarge m_iszSoundEngage; // 0x548            
            CUtlSymbolLarge m_iszSoundDisengage; // 0x550            
            CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x558            
            CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x560            
            CUtlSymbolLarge m_iszSoundMovingLoop; // 0x568            
            uint8_t _pad0570[0x18]; // 0x570
            // m_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Position;
            char m_Position[0x20]; // 0x588            
            // m_PositionDelta has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_PositionDelta;
            char m_PositionDelta[0x20]; // 0x5a8            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueZero; // 0x5c8            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueOne; // 0x5e0            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueCustom; // 0x5f8            
            source2sdk::entity2::CEntityIOOutput m_OnEngage; // 0x610            
            source2sdk::entity2::CEntityIOOutput m_OnDisengage; // 0x628            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointValueRemapper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointValueRemapper) == 0x640);
    };
};
