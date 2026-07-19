#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CInfoLadderDismount;
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
        // Size: 0x800
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncLadder : public source2sdk::server::CBaseModelEntity
        {
        public:
            Vector m_vecLadderDir; // 0x770            
            uint8_t _pad077c[0x4]; // 0x77c
            // metadata: MNotSaved
            // m_Dismounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CInfoLadderDismount>> m_Dismounts;
            char m_Dismounts[0x18]; // 0x780            
            Vector m_vecLocalTop; // 0x798            
            VectorWS m_vecPlayerMountPositionTop; // 0x7a4            
            VectorWS m_vecPlayerMountPositionBottom; // 0x7b0            
            float m_flAutoRideSpeed; // 0x7bc            
            bool m_bDisabled; // 0x7c0            
            bool m_bFakeLadder; // 0x7c1            
            bool m_bHasSlack; // 0x7c2            
            uint8_t _pad07c3[0x5]; // 0x7c3
            CUtlSymbolLarge m_surfacePropName; // 0x7c8            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerGotOnLadder; // 0x7d0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerGotOffLadder; // 0x7e8            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncLadder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncLadder) == 0x800);
    };
};
