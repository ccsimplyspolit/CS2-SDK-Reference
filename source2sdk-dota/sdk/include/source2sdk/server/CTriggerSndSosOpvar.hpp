#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
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
        // Size: 0xc50
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerSndSosOpvar : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNotSaved
            // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingPlayers;
            char m_hTouchingPlayers[0x18]; // 0x8f0            
            // metadata: MNotSaved
            VectorWS m_flPosition; // 0x908            
            float m_flCenterSize; // 0x914            
            float m_flMinVal; // 0x918            
            float m_flMaxVal; // 0x91c            
            CUtlSymbolLarge m_opvarName; // 0x920            
            CUtlSymbolLarge m_stackName; // 0x928            
            CUtlSymbolLarge m_operatorName; // 0x930            
            bool m_bVolIs2D; // 0x938            
            // metadata: MNotSaved
            char m_opvarNameChar[256]; // 0x939            
            // metadata: MNotSaved
            char m_stackNameChar[256]; // 0xa39            
            // metadata: MNotSaved
            char m_operatorNameChar[256]; // 0xb39            
            uint8_t _pad0c39[0x3]; // 0xc39
            // metadata: MNotSaved
            Vector m_VecNormPos; // 0xc3c            
            // metadata: MNotSaved
            float m_flNormCenterSize; // 0xc48            
            uint8_t _pad0c4c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSndSosOpvar) == 0xc50);
    };
};
