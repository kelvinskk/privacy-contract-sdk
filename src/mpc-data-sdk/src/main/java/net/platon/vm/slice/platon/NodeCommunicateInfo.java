// **********************************************************************
//
// Copyright (c) 2003-2018 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.4
//
// <auto-generated>
//
// Generated from file `platon_mpc_service.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package net.platon.vm.slice.platon;

public class NodeCommunicateInfo implements java.lang.Cloneable, java.io.Serializable
{
    public NodeCommunicateMode mode;

    public String user;

    public String password;

    public String endpoint;

    public boolean ready;

    public NodeCommunicateInfo()
    {
        mode = NodeCommunicateMode.MCALLBACK;
        user = "";
        password = "";
        endpoint = "";
    }

    public NodeCommunicateInfo(NodeCommunicateMode mode, String user, String password, String endpoint, boolean ready)
    {
        this.mode = mode;
        this.user = user;
        this.password = password;
        this.endpoint = endpoint;
        this.ready = ready;
    }

    public boolean
    equals(java.lang.Object rhs)
    {
        if(this == rhs)
        {
            return true;
        }
        NodeCommunicateInfo _r = null;
        if(rhs instanceof NodeCommunicateInfo)
        {
            _r = (NodeCommunicateInfo)rhs;
        }

        if(_r != null)
        {
            if(mode != _r.mode)
            {
                if(mode == null || _r.mode == null || !mode.equals(_r.mode))
                {
                    return false;
                }
            }
            if(user != _r.user)
            {
                if(user == null || _r.user == null || !user.equals(_r.user))
                {
                    return false;
                }
            }
            if(password != _r.password)
            {
                if(password == null || _r.password == null || !password.equals(_r.password))
                {
                    return false;
                }
            }
            if(endpoint != _r.endpoint)
            {
                if(endpoint == null || _r.endpoint == null || !endpoint.equals(_r.endpoint))
                {
                    return false;
                }
            }
            if(ready != _r.ready)
            {
                return false;
            }

            return true;
        }

        return false;
    }

    public int
    hashCode()
    {
        int __h = 5381;
        __h = IceInternal.HashUtil.hashAdd(__h, "::platon::NodeCommunicateInfo");
        __h = IceInternal.HashUtil.hashAdd(__h, mode);
        __h = IceInternal.HashUtil.hashAdd(__h, user);
        __h = IceInternal.HashUtil.hashAdd(__h, password);
        __h = IceInternal.HashUtil.hashAdd(__h, endpoint);
        __h = IceInternal.HashUtil.hashAdd(__h, ready);
        return __h;
    }

    public NodeCommunicateInfo
    clone()
    {
        NodeCommunicateInfo c = null;
        try
        {
            c = (NodeCommunicateInfo)super.clone();
        }
        catch(CloneNotSupportedException ex)
        {
            assert false; // impossible
        }
        return c;
    }

    public void
    __write(IceInternal.BasicStream __os)
    {
        NodeCommunicateMode.__write(__os, mode);
        __os.writeString(user);
        __os.writeString(password);
        __os.writeString(endpoint);
        __os.writeBool(ready);
    }

    public void
    __read(IceInternal.BasicStream __is)
    {
        mode = NodeCommunicateMode.__read(__is);
        user = __is.readString();
        password = __is.readString();
        endpoint = __is.readString();
        ready = __is.readBool();
    }

    static public void
    __write(IceInternal.BasicStream __os, NodeCommunicateInfo __v)
    {
        if(__v == null)
        {
            __nullMarshalValue.__write(__os);
        }
        else
        {
            __v.__write(__os);
        }
    }

    static public NodeCommunicateInfo
    __read(IceInternal.BasicStream __is, NodeCommunicateInfo __v)
    {
        if(__v == null)
        {
             __v = new NodeCommunicateInfo();
        }
        __v.__read(__is);
        return __v;
    }
    
    private static final NodeCommunicateInfo __nullMarshalValue = new NodeCommunicateInfo();

    public static final long serialVersionUID = -205281694L;
}
