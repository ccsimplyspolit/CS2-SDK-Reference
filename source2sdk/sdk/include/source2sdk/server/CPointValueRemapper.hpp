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
        // Size: 0x650
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointValueRemapper : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bDisabled; // 0x4a8            
            bool m_bUpdateOnClient; // 0x4a9            
            uint8_t _pad04aa[0x2]; // 0x4aa
            source2sdk::client::ValueRemapperInputType_t m_nInputType; // 0x4ac            
            CUtlSymbolLarge m_iszRemapLineStartName; // 0x4b0            
            CUtlSymbolLarge m_iszRemapLineEndName; // 0x4b8            
            // m_hRemapLineStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemapLineStart;
            char m_hRemapLineStart[0x4]; // 0x4c0            
            // m_hRemapLineEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemapLineEnd;
            char m_hRemapLineEnd[0x4]; // 0x4c4            
            float m_flMaximumChangePerSecond; // 0x4c8            
            float m_flDisengageDistance; // 0x4cc            
            float m_flEngageDistance; // 0x4d0            
            bool m_bRequiresUseKey; // 0x4d4            
            uint8_t _pad04d5[0x3]; // 0x4d5
            source2sdk::client::ValueRemapperOutputType_t m_nOutputType; // 0x4d8            
            uint8_t _pad04dc[0x4]; // 0x4dc
            CUtlSymbolLarge m_iszOutputEntityName; // 0x4e0            
            CUtlSymbolLarge m_iszOutputEntity2Name; // 0x4e8            
            CUtlSymbolLarge m_iszOutputEntity3Name; // 0x4f0            
            CUtlSymbolLarge m_iszOutputEntity4Name; // 0x4f8            
            // metadata: MNotSaved
            // m_hOutputEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hOutputEntities;
            char m_hOutputEntities[0x18]; // 0x500            
            source2sdk::client::ValueRemapperHapticsType_t m_nHapticsType; // 0x518            
            source2sdk::client::ValueRemapperMomentumType_t m_nMomentumType; // 0x51c            
            float m_flMomentumModifier; // 0x520            
            float m_flSnapValue; // 0x524            
            float m_flCurrentMomentum; // 0x528            
            source2sdk::client::ValueRemapperRatchetType_t m_nRatchetType; // 0x52c            
            float m_flRatchetOffset; // 0x530            
            float m_flInputOffset; // 0x534            
            bool m_bEngaged; // 0x538            
            bool m_bFirstUpdate; // 0x539            
            uint8_t _pad053a[0x2]; // 0x53a
            float m_flPreviousValue; // 0x53c            
            source2sdk::entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x540            
            VectorWS m_vecPreviousTestPoint; // 0x544            
            // m_hUsingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hUsingPlayer;
            char m_hUsingPlayer[0x4]; // 0x550            
            float m_flCustomOutputValue; // 0x554            
            CUtlSymbolLarge m_iszSoundEngage; // 0x558            
            CUtlSymbolLarge m_iszSoundDisengage; // 0x560            
            CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x568            
            CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x570            
            CUtlSymbolLarge m_iszSoundMovingLoop; // 0x578            
            uint8_t _pad0580[0x18]; // 0x580
            // m_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Position;
            char m_Position[0x20]; // 0x598            
            // m_PositionDelta has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_PositionDelta;
            char m_PositionDelta[0x20]; // 0x5b8            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueZero; // 0x5d8            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueOne; // 0x5f0            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueCustom; // 0x608            
            source2sdk::entity2::CEntityIOOutput m_OnEngage; // 0x620            
            source2sdk::entity2::CEntityIOOutput m_OnDisengage; // 0x638            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointValueRemapper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointValueRemapper) == 0x650);
    };
};
