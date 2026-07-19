#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace client
    {
        struct IPhysicsMotionController;
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
        // Size: 0x940
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_gravityScale"
        // static metadata: MNetworkVarNames "float m_linearLimit"
        // static metadata: MNetworkVarNames "float m_linearDamping"
        // static metadata: MNetworkVarNames "float m_angularLimit"
        // static metadata: MNetworkVarNames "float m_angularDamping"
        // static metadata: MNetworkVarNames "float m_linearForce"
        // static metadata: MNetworkVarNames "float m_flFrequency"
        // static metadata: MNetworkVarNames "float m_flDampingRatio"
        // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAt"
        // static metadata: MNetworkVarNames "bool m_bCollapseToForcePoint"
        // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
        // static metadata: MNetworkVarNames "Vector m_vecLinearForceDirection"
        // static metadata: MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
        #pragma pack(push, 1)
        class CTriggerPhysics : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08e0[0x8]; // 0x8e0
            // metadata: MPhysPtr
            source2sdk::client::IPhysicsMotionController* m_pController; // 0x8e8            
            // metadata: MNetworkEnable
            float m_gravityScale; // 0x8f0            
            // metadata: MNetworkEnable
            float m_linearLimit; // 0x8f4            
            // metadata: MNetworkEnable
            float m_linearDamping; // 0x8f8            
            // metadata: MNetworkEnable
            float m_angularLimit; // 0x8fc            
            // metadata: MNetworkEnable
            float m_angularDamping; // 0x900            
            // metadata: MNetworkEnable
            float m_linearForce; // 0x904            
            // metadata: MNetworkEnable
            float m_flFrequency; // 0x908            
            // metadata: MNetworkEnable
            float m_flDampingRatio; // 0x90c            
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAt; // 0x910            
            // metadata: MNetworkEnable
            bool m_bCollapseToForcePoint; // 0x91c            
            uint8_t _pad091d[0x3]; // 0x91d
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAtWorld; // 0x920            
            // metadata: MNetworkEnable
            Vector m_vecLinearForceDirection; // 0x92c            
            // metadata: MNetworkEnable
            bool m_bConvertToDebrisWhenPossible; // 0x938            
            uint8_t _pad0939[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPhysics) == 0x940);
    };
};
