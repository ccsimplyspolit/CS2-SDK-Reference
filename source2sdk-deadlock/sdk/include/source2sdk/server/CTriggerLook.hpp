#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTriggerOnce.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x960
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bTestOcclusion"
        // static metadata: MNetworkVarNames "bool m_bTestAllVisibleOcclusion"
        #pragma pack(push, 1)
        class CTriggerLook : public source2sdk::server::CTriggerOnce
        {
        public:
            // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLookTarget;
            char m_hLookTarget[0x4]; // 0x8f8            
            float m_flFieldOfView; // 0x8fc            
            float m_flLookTime; // 0x900            
            float m_flLookTimeTotal; // 0x904            
            source2sdk::entity2::GameTime_t m_flLookTimeLast; // 0x908            
            float m_flTimeoutDuration; // 0x90c            
            bool m_bTimeoutFired; // 0x910            
            bool m_bIsLooking; // 0x911            
            bool m_b2DFOV; // 0x912            
            bool m_bUseVelocity; // 0x913            
            // metadata: MNetworkEnable
            bool m_bTestOcclusion; // 0x914            
            // metadata: MNetworkEnable
            bool m_bTestAllVisibleOcclusion; // 0x915            
            uint8_t _pad0916[0x2]; // 0x916
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x918            
            source2sdk::entity2::CEntityIOOutput m_OnStartLook; // 0x930            
            source2sdk::entity2::CEntityIOOutput m_OnEndLook; // 0x948            
            
            // Datamap fields:
            // void CTriggerLookTimeoutThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLook) == 0x960);
    };
};
