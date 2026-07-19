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
        // Size: 0x648
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        // static metadata: MNetworkVarNames "bool m_bUpdateOnClient"
        // static metadata: MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
        // static metadata: MNetworkVarNames "float m_flMaximumChangePerSecond"
        // static metadata: MNetworkVarNames "float m_flDisengageDistance"
        // static metadata: MNetworkVarNames "float m_flEngageDistance"
        // static metadata: MNetworkVarNames "bool m_bRequiresUseKey"
        // static metadata: MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hOutputEntities"
        // static metadata: MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
        // static metadata: MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
        // static metadata: MNetworkVarNames "float m_flMomentumModifier"
        // static metadata: MNetworkVarNames "float m_flSnapValue"
        // static metadata: MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
        // static metadata: MNetworkVarNames "float m_flInputOffset"
        #pragma pack(push, 1)
        class CPointValueRemapper : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x4a0            
            // metadata: MNetworkEnable
            bool m_bUpdateOnClient; // 0x4a1            
            uint8_t _pad04a2[0x2]; // 0x4a2
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperInputType_t m_nInputType; // 0x4a4            
            CUtlSymbolLarge m_iszRemapLineStartName; // 0x4a8            
            CUtlSymbolLarge m_iszRemapLineEndName; // 0x4b0            
            // metadata: MNetworkEnable
            // m_hRemapLineStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemapLineStart;
            char m_hRemapLineStart[0x4]; // 0x4b8            
            // metadata: MNetworkEnable
            // m_hRemapLineEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRemapLineEnd;
            char m_hRemapLineEnd[0x4]; // 0x4bc            
            // metadata: MNetworkEnable
            float m_flMaximumChangePerSecond; // 0x4c0            
            // metadata: MNetworkEnable
            float m_flDisengageDistance; // 0x4c4            
            // metadata: MNetworkEnable
            float m_flEngageDistance; // 0x4c8            
            // metadata: MNetworkEnable
            bool m_bRequiresUseKey; // 0x4cc            
            uint8_t _pad04cd[0x3]; // 0x4cd
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperOutputType_t m_nOutputType; // 0x4d0            
            uint8_t _pad04d4[0x4]; // 0x4d4
            CUtlSymbolLarge m_iszOutputEntityName; // 0x4d8            
            CUtlSymbolLarge m_iszOutputEntity2Name; // 0x4e0            
            CUtlSymbolLarge m_iszOutputEntity3Name; // 0x4e8            
            CUtlSymbolLarge m_iszOutputEntity4Name; // 0x4f0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hOutputEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hOutputEntities;
            char m_hOutputEntities[0x18]; // 0x4f8            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperHapticsType_t m_nHapticsType; // 0x510            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperMomentumType_t m_nMomentumType; // 0x514            
            // metadata: MNetworkEnable
            float m_flMomentumModifier; // 0x518            
            // metadata: MNetworkEnable
            float m_flSnapValue; // 0x51c            
            float m_flCurrentMomentum; // 0x520            
            // metadata: MNetworkEnable
            source2sdk::client::ValueRemapperRatchetType_t m_nRatchetType; // 0x524            
            float m_flRatchetOffset; // 0x528            
            // metadata: MNetworkEnable
            float m_flInputOffset; // 0x52c            
            bool m_bEngaged; // 0x530            
            bool m_bFirstUpdate; // 0x531            
            uint8_t _pad0532[0x2]; // 0x532
            float m_flPreviousValue; // 0x534            
            source2sdk::entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x538            
            Vector m_vecPreviousTestPoint; // 0x53c            
            // m_hUsingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hUsingPlayer;
            char m_hUsingPlayer[0x4]; // 0x548            
            float m_flCustomOutputValue; // 0x54c            
            CUtlSymbolLarge m_iszSoundEngage; // 0x550            
            CUtlSymbolLarge m_iszSoundDisengage; // 0x558            
            CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x560            
            CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x568            
            CUtlSymbolLarge m_iszSoundMovingLoop; // 0x570            
            uint8_t _pad0578[0x18]; // 0x578
            // m_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Position;
            char m_Position[0x20]; // 0x590            
            // m_PositionDelta has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_PositionDelta;
            char m_PositionDelta[0x20]; // 0x5b0            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueZero; // 0x5d0            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueOne; // 0x5e8            
            source2sdk::entity2::CEntityIOOutput m_OnReachedValueCustom; // 0x600            
            source2sdk::entity2::CEntityIOOutput m_OnEngage; // 0x618            
            source2sdk::entity2::CEntityIOOutput m_OnDisengage; // 0x630            
            
            // Datamap fields:
            // void CPointValueRemapperUpdateThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointValueRemapper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointValueRemapper) == 0x648);
    };
};
